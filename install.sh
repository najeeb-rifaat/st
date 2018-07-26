#!/usr/bin/env bash
rm -rf ./pkg ./src ./st-**
makepkg -sif --skipinteg --noconfirm
