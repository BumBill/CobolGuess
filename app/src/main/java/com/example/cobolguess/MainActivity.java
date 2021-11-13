package com.example.cobolguess;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.content.res.AssetManager;
//import android.content.Context;
//import android.widget.Toast;
//import android.util.Log;
import android.webkit.WebView;
import android.webkit.WebSettings;
import android.webkit.WebViewClient;
import android.webkit.WebResourceRequest;
import android.webkit.WebResourceResponse;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.regex.Pattern;






public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        WebView guessTheNumber = (WebView) findViewById(R.id.webView);
        WebSettings webSettings = guessTheNumber.getSettings();
        webSettings.setJavaScriptEnabled(true);
        guessTheNumber.setWebViewClient(new WebViewClient() {

            @Override
            public WebResourceResponse shouldInterceptRequest(
                    WebView view,
                    WebResourceRequest request) {
                String url = request.getUrl().getLastPathSegment();
                try {
                    String mimeType;
                    AssetManager assetManager = getAssets();
                    if (Pattern.matches("(.*)+(.html)$", url)) {
                        mimeType = "text/html";
                    } else if (Pattern.matches("(.*)+(.css)$", url)) {
                        mimeType = "text/css";
                    } else if (Pattern.matches("(.*)+(.js)$", url)) {
                        mimeType = "text/javascript";
                    } else if (Pattern.matches("(.*)+(.wasm)$", url)) {
                        mimeType = "application/wasm";
                    } else {
                        return super.shouldInterceptRequest(view, request);
                    }
                    InputStream input = assetManager.open("www/" + url);
                    return new WebResourceResponse(mimeType, "utf-8", input);
                } catch (IOException e) {
                    e.printStackTrace();
                    InputStream error = new ByteArrayInputStream(e.toString().getBytes());
                    return new WebResourceResponse("text/plain", "utf8", error);
                }
            }

            @Override
            public void onPageFinished(WebView view, String url) {
                super.onPageFinished(view, url);
                if(url.equals("bye.html")){
                    finish();
                }
            }

        });
        guessTheNumber.loadUrl("https://appassets.androidplatform.net/index.html");
        //guessTheNumber.loadUrl("file:///android_asset/www/index.html");
    }



}

