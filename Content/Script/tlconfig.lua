package.path = package.path .. ';./Declaration'

return {
    preload_modules={
        'Declaration/StaticallyExports/StaticExp',
        'Declaration/UE4'
        --'DeclStaticExp'
    }
}