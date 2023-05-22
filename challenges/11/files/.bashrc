
set -m
function backgroundjob {
while [ true ] ; do
#read -t 3 -n 1
trap 'echo to find the flag you have to end this process,try control z and findout how to kill' INT
trap "echo you have found the flag {{flag}} && break" SIGTERM
read -t 3
if [ $? = 0 ] ; then
printf "try to close this job" ;
else
echo "waiting for the keypress"
fi
done

}  2>&1
backgroundjob 2>&1 &
kill -STOP %1
