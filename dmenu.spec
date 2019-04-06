%define debug_package %{nil}

Name: dmenu
Version: 4.8
Release: 1%{?dist}
Summary: An efficient dynamic menu for X

License: MIT
URL: https://github.com/saleone/dmenu
Source0: https://github.com/saleone/dmenu/archive/%{version}.tar.gz

BuildRequires: gcc
BuildRequires: libX11-devel
BuildRequires: libXft-devel
BuildRequires: libXinerama-devel

%description
%{summary}


%prep
%autosetup

%build
%make_build


%install
%make_install


%files
/usr/local/bin/dmenu
/usr/local/bin/dmenu_path
/usr/local/bin/dmenu_run
/usr/local/bin/stest
/usr/local/share/man/man1/dmenu.1
/usr/local/share/man/man1/stest.1


%changelog
* Mon Apr 1 2019 Saša Savić <sasa@sasa-savic.com> 4.8-1
- Initial RPM release

