# Maintainer: Najeeb Rifaat <mohamme89d@gmail.com>

pkgname=st-najeeb
basepkgname=st
pkgver=0.8.4
pkgrel=1
pkgdesc="A simple virtual terminal emulator for X"
url="https://st.suckless.org/"
arch=('x86_64')
license=('MIT')
options=(zipman)
depends=('libxext' 'libxft' )
provides=("${pkgname}")
conflicts=("${pkgname}")

_patches=(
  "https://st.suckless.org/patches/alpha/st-alpha-0.8.2.diff"
  "https://st.suckless.org/patches/clipboard/st-clipboard-0.8.3.diff"
  "https://st.suckless.org/patches/scrollback/st-scrollback-0.8.4.diff"
  "https://st.suckless.org/patches/boxdraw/st-boxdraw_v2-0.8.2.diff"
  "https://st.suckless.org/patches/xresources/st-xresources-20190105-3be4cf1.diff"
)
source=(
  "http://dl.suckless.org/st/$basepkgname-$pkgver.tar.gz"
  "${_patches[@]}"
  "config.h"
)

md5sums=('SKIP')

prepare() {
  cd $srcdir/$basepkgname-$pkgver
  patch -Np1 -F3 --ignore-whitespace < "$srcdir/st-alpha-0.8.2.diff"
  patch -Np1 -F3 --ignore-whitespace < "$srcdir/st-clipboard-0.8.3.diff"
  patch -Np1 -F3 --ignore-whitespace < "$srcdir/st-scrollback-0.8.4.diff"
  patch -Np1 -F3 --ignore-whitespace < "$srcdir/st-boxdraw_v2-0.8.2.diff"

  cp $srcdir/config.h ./config.h
}

build() {
  cd $srcdir/$basepkgname-$pkgver
  make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
  cd $srcdir/$basepkgname-$pkgver
  make PREFIX=/usr DESTDIR="$pkgdir" TERMINFO="$pkgdir/usr/share/terminfo" install
  install -Dm644 LICENSE "$pkgdir/usr/share/licenses/$basepkgname/LICENSE"
  install -Dm644 README "$pkgdir/usr/share/doc/$basepkgname/README"
}
