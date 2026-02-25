git log -n5 | grep commit | awk -F " " '{print $2}'
