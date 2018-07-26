# Maintainer: Najeeb Rifaat <mohamme89d@gmail.com>

pkgname=st-najeeb
basepkgname=st
pkgver=0.8.1
pkgrel=1
pkgdesc="A simple virtual terminal emulator for X"
arch=('x86_64')
url="https://st.suckless.org/"
license=('MIT')
depends=('libxext' 'libxft' )
makedepends=()
provides=("${pkgname}")
conflicts=("${pkgname}")
_patches=(
  "https://st.suckless.org/patches/xresources/st-xresources-20180309-c5ba9c0.diff"
  "https://st.suckless.org/patches/scrollback/st-scrollback-0.8.diff"
)

source=(
  "http://dl.suckless.org/st/$basepkgname-$pkgver.tar.gz"
  "${_patches[@]}"
)

#md5sums=('92135aecdba29300bb2e274a55f5b71e'
#         '6c1d71ee8f8abfc3976536a17a376d20')

prepare() {
  cd $srcdir/$basepkgname-$pkgver
  sed -i '/tic /d' Makefile
  patch -Np1 -i "$srcdir/st-xresources-20180309-c5ba9c0.diff"
  patch -Np1 -i "$srcdir/st-scrollback-0.8.diff"
  cp $srcdir/../config.h ./config.h
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
