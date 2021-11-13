>>source format is free
identification division.
program-id. guess-the-number.
environment division.
data division.
working-storage section.
01 random-nb    pic 9.
01 guess        pic 9 value 0.
01 counter      pic 999 value 999.
01 started      pic 9 value 0.
*>01 stopped      pic 9 value 0.
01 win          pic 9 value 0.
01 done         pic 9 value 0.
01 btn-id       pic x(3).
01 from-prompt  pic x.
  88 valid-nb   value 1 thru 9.
*>  88 valid-cmd  value "D" "S".
  88 valid-cmd  value "D".

procedure division.
main.
  call "startup" returning omitted
  perform check-prompt until started=1.
  compute random-nb = 1 + 9 * (function random(function current-date(15:2)))
  display random-nb
  perform check-guess until done=1 or counter=0.
  perform update-ui
  stop run
  .

check-prompt.
  call "emscripten_sleep" using by value 10 returning omitted.
  accept from-prompt.
  if valid-nb
    move from-prompt to guess
  else
    if valid-cmd
      evaluate from-prompt
        when "D"
          move 1 to started
*>        when "S"
*>          move 1 to done
*>          move 1 to stopped
      end-evaluate
    perform update-ui
    else
      continue
    end-if
  end-if
  .

check-guess.
  perform check-prompt.
  if valid-nb        
    if guess = random-nb then
      move 1 to done
      move 1 to win
    end-if
  end-if
  perform update-counter
  perform update-ui
  .

update-counter.
  add -1 to counter.
  if counter < 1
    move 1 to done
  end-if
  .

update-ui.
*> Launching the game
  if started = 1
    call "setElementProperty" using "#begin" "style.visibility" "visible"
    call "setElementProperty" using ".counter" "style.visibility" "visible"
    call "setElementProperty" using "#numbers" "style.visibility" "visible"
    call "setElementProperty" using "#draw" "style.display" "none"
*>    call "setElementProperty" using "#stop" "style.display" "inline"
    call "setElementProperty" using "#count" "innerHTML" counter
  end-if
  
*> Update buttons and result div
  if valid-nb
    string "#b" guess into btn-id
    call "setElementProperty" using btn-id "disabled" "true"
    call "setElementProperty" using "#result" "style.visibility" "visible"
     if win = 0
       call "setElementProperty" using "#lost" "style.display" "block"
       call "setElementProperty" using btn-id "style.color" "red"
     else
        call "setElementProperty" using "#win" "style.display" "inline"
        call "setElementProperty" using "#lost" "style.display" "none"
        call "setElementProperty" using btn-id "style.color" "green"
     end-if
  end-if
  
*> End of the game
  if done = 1 
    call "setElementProperty" using "#end" "style.visibility" "visible"
    call "setElementProperty" using "#Yes" "style.visibility" "visible"
    call "setElementProperty" using "#No" "style.visibility" "visible"
*>    call "setElementProperty" using "#stop" "style.display" "none"
    call "setElementProperty" using "#begin" "style.visibility" "hidden"
    call "setElementProperty" using "#nb" "innerHTML" random-nb
  end-if
*> Game interruption
*>  if stopped = 1
*>     call "setElementProperty" using "#stopped" "style.display" "inline"
*>  end-if

*> Counter update
  evaluate counter
  when < 1
    call "setElementProperty" using "#end" "style.visibility" "visible"
    call "setElementProperty" using "#Yes" "style.visibility" "visible"
    call "setElementProperty" using "#No" "style.visibility" "visible"
*>    call "setElementProperty" using "#stop" "style.display" "none"
    call "setElementProperty" using "#late" "style.display" "inline"
    call "setElementProperty" using "#count" "style.display" "none"
    call "setElementProperty" using "#begin" "style.visibility" "hidden"
    call "setElementProperty" using "#lost" "style.display" "none"
  when < 250
    call "setElementProperty" using "#count" "style.color" "red"
  when < 500
    call "setElementProperty" using "#count" "style.color" "orange"
  end-evaluate
  .

  end program guess-the-number.
