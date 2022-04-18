number=0
fname=""
i=0
while [[ $i -lt 10 ]]
do
  number=$((number+1))
  printf -v fname '%s%02d.txt' "output" "$number"
  echo $fname
  touch "$fname"
  if [[ $number -eq 10 ]]; then
    break
  fi
  i=$(( $i + 1 ))
done

echo 'All Done!'
