void run(char *argv[]) {}

void func(bool cond)
{
    char *argv[10];
    int i = 0;
    if (cond)
    {
        char foo[10] = "foo";
        argv[i++] = foo;
    }
    if (cond)
    {
        char bar[10] = "bar";
        argv[i++] = bar;
    }
    run(argv);
}

int main()
{
    func(true);
    return 0;
}
