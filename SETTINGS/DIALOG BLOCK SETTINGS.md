# Настройки конфигураций в DialogBlocks для компиляции MS Visual Studio 2022 и MinGW64

## Paths

|-------------|------|
| WXWIN       | `D:\Development\RedPanda-CPP\wxWidgets` |
| DBPROJECTS  | `D:\Projects\DialogBlocksProjects` |
| MINGWDIR    | `D:\Development\RedPanda-CPP\mingw64` |
| MSBUILDDIR  | `C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin` |
| MSVCDIR     | `C:\Program Files\Microsoft Visual Studio\2022\Community` |
| PLATFORMSDK | `C:\Program Files (x86)\Windows Kits\10` |

## Global Default

|----------------------------------------|------------|
| Translate strings                      | ✅         |
| Make Unicode strings source-friendly   | ✅         |
| Target wxWidgets version               | `3.2.6`    |
| VC++ version                           | `17`   <<--    Microsoft Visual Studio Community 2022 (64-разрядная версия) - Версия 17.12.4       |
| VC++ tools version                     | `14.42.34433`   <<--    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.42.34433 |
| Full Platform SDK version              | `10.0.22621.0`   <<--    C:\Program Files (x86)\Windows Kits\10\bin\10.0.22621.0 |
| Source encoding                        | `utf-8`    |
| Project encoding                       | `utf-8`    |
| Message encoding                       | `utf-8`    |


## Compiler configurations:

---

[x] **VC++ Project Unicode Debug/Release**

## Configuration settings:

### Basic

|-----------------|---------------|
| Build mode      | Debug/Release |
| Unicode mode    | Unicode       |
| Shared mode     | Static        |
| Modularity      | Modular       |
| GUI mode        | Console/GUI   |
| Toolkit         | wxMSW         |
| Processor type  | Default(32-bit)/64-bit        |
| Runtime linking | Dynamic       |

### Flags

|----------------------|----------------|
|  Extra compile flags | %AUTO% /utf-8  |

---

[x] **MinGW Unicode Debug**

## Configuration settings:

### Basic

|-----------------|--------|
| Build mode      | Debug  |
| Unicode mode    | Unicode |
| Shared mode     | Static  |
| Modularity      | Monolithic |
| GUI mode        | Console/GUI |
| Toolkit         | wxMSW |
| Processor type  | Default |
| Runtime linking | Static |
| Use exceptions  | Yes |

### Flags

|-----------------|--------|
| Libraries       | `-mthreads -lwxmsw32ud_core -lwxbase32ud -lwxpngd -lwxjpegd -lwxtiffd -lwxzlibd -lwxregexud -lkernel32 -luser32 -lgdi32 -lwinspool -lcomdlg32 -ladvapi32 -lshell32 -lole32 -loleaut32 -luuid -lcomctl32 -lwsock32 -lodbc32 -lshlwapi -lversion -loleacc -luxtheme -mwindows -lstdc++ -lsqlite3 -static` |

✅  *__Если приложение консольное, то флаг "-mwindows" не нужен !__*

---

[x] **MinGW Unicode Release**

### Basic

|-----------------|--------|
| Build mode      | Release |
| Unicode mode    | Unicode |
| Shared mode     | Static  |
| Modularity      | Monolithic |
| GUI mode        | Console/GUI |
| Toolkit         | wxMSW |
| Processor type  | Default |
| Runtime linking | Static |
| Use exceptions  | Yes |

### Flags

|-----------------|--------|
| Libraries       | `-mthreads -lwxmsw32u_core -lwxbase32u -lwxpng -lwxjpeg -lwxtiff -lwxzlib -lwxregexu -lkernel32 -luser32 -lgdi32 -lwinspool -lcomdlg32 -ladvapi32 -lshell32 -lole32 -loleaut32 -luuid -lcomctl32 -lwsock32 -lodbc32 -lshlwapi -lversion -loleacc -luxtheme -mwindows -lstdc++ -lsqlite3 -static` |

✅  *__Если приложение консольное, то флаг "-mwindows" не нужен !__*

---

# Вариант конфигурации проекта Visual Studio 2022 через системную переменную Windows

## Все конфигурации проекта для всех платформ:
- **C/C++ → Дополнительные каталоги включаемых файлов**:  
  ```$(wxwin)\include\msvc;$(wxwin)\include```

## Все конфигурации проекта для x64:
- **Компоновщик → Дополнительные каталоги библиотек**:  
  ```$(wxwin)\lib\vc_x64_lib```

## Все конфигурации проекта для Win32:
- **Компоновщик → Дополнительные каталоги библиотек**:  
  ```$(wxwin)\lib\vc_lib```

---

## Системная переменная Windows:
- **wxwin**:  
  ```D:\Development\RedPanda-CPP\wxWidgets```
