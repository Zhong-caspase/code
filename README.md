# code

个人代码练习与学习仓库，记录日常编写的示例程序和练习代码。

## 当前内容

| 文件 | 说明 |
|------|------|
| `test.c` | C 语言 Hello World 入门示例 |

## 目录结构

```
code/
├── test.c      # C 语言示例
├── .gitignore  # 忽略编译产物（.exe 等）
└── .vscode/    # VS Code 编辑器配置
```

## 编译运行（C 示例）

本机使用 MinGW gcc：

```powershell
gcc test.c -o test.exe
.\test.exe
```

> 编译产物（`*.exe` 等）已被 `.gitignore` 忽略，不会上传到仓库。
