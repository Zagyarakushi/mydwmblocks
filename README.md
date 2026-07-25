# My dwmblocks

A customised build of dwmblocks with personal configuration and status modules for a minimal, keyboard-driven Linux workflow.

dwmblocks is a lightweight status bar for dwm that updates information through modular scripts and commands.

---

## 📸 Preview

![dwmblocks screenshot](screenshots/dwmblocks.png)

---

## ✨ Features

- Lightweight status bar for dwm
- Custom status modules
- Signal-based updates
- Minimal resource usage
- Integrated with my dwm workflow

---

## 🔧 Status Modules

This build includes custom blocks for:

- System information
- Network status
- Volume control
- Battery status
- Date and time

(Replace this list with your actual blocks.)

---

## 🛠️ Requirements

You need:

- GCC
- Make

### Void Linux

```bash
sudo xbps-install -S gcc make
```

Other distributions may require different package names.

---

## 🚀 Installation

Clone the repository:

```bash
git clone https://gitlab.com/zagyarakushi/mydwmblocks.git

cd mydwmblocks
```

Build:

```bash
make
```

Install:

```bash
sudo make install
```

Run:

```bash
dwmblocks &
```

---

## ⚙️ Configuration

The main configuration file is:

```
blocks.def.h
```

Modify it to customise:

- Commands
- Update intervals
- Signals
- Status formatting

After changing configuration:

```bash
make clean
make
sudo make install
```

---

## 📚 About

This repository contains my personal dwmblocks build used as part of my suckless desktop environment.

The goal is to maintain a lightweight, fast, and informative status bar while following the simplicity of the suckless philosophy.

---

## 🔗 Related Projects

- mydwm
- mydmenu

---

## 📄 License

MIT License