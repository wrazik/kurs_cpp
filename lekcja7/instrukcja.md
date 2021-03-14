# Instalacja i użycie vcpkg z Visual Studio
1. Pogranie gita: https://git-scm.com/
2. Pobranie i instalacja vcpkg. W tym celu trzeba otworzyć PowerShella z menu start i wpisać:
```
git clone https://github.com/microsoft/vcpkg
cd vcpkg
bootstrap-vcpkg.bat
```
3. Pobranie pakietu i zainstalowanie go wszystkim lokalnym użytkownikom:
```
./vcpkg.exe install <library>
./vcpkg.exe integrate install
```
