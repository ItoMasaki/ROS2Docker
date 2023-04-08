ps aux | grep ruby | grep -v grep | awk '{ print "kill -9", $2 }' | sh
ps aux | grep python3 | grep -v grep | awk '{ print "kill -9", $2 }' | sh
ps aux | grep ros | grep -v grep | awk '{ print "kill -9", $2 }' | sh
