ps aux | grep ros | grep -v grep | awk '{ print "kill -9", $2 }' | sh
