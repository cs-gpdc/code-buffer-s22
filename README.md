# code-buffer-s22

Script to create input output files numbered 0-10

```
number=0
fname=""
i=0
while [[ $i -lt 10 ]]
do
  number=$((number+1))
  printf -v fname '%s%02d.txt' "input" "$number"
  echo $fname
  touch "$fname"
  if [[ $number -eq 10 ]]; then
    break
  fi
  i=$(( $i + 1 ))
done

echo 'All Done!'
```
