
//ref link:https://www.youtube.com/watch?v=9SmJ3XxSg_g&list=PLRwVmtr-pp05c1HTBj1no6Fl6C6mlxYDG&index=12
//

// MyAssembly.asm - (customBuildTool)commandline - ml /c /Cx /coff "%(FullPath)"
// MyAssembly.asm - (customBuildTool)output - %(Filename).obj

// multiply overflow 1111 * 1111 = 11101001
// 32bit overflow 1111 1111 1111 1111 1111 1111 1111 1111 * 1111 1111 1111 1111 1111 1111 1111 1111 = overflow

extern "C" void doit();

void main()
{
	doit();
}

void doit()
{
}
