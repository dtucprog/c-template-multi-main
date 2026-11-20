FROM archlinux:base

#RUN reflector --latest 10 --protocol https --sort rate --save /etc/pacman.d/mirrorlist && \
RUN pacman -Syu --noconfirm --needed \
    clang git make sudo \
    && pacman -Scc --noconfirm

RUN useradd -m vscode \
    && echo "vscode ALL=(ALL) NOPASSWD:ALL" > /etc/sudoers.d/vscode

USER vscode