find . -name "*.sh" | rev | cut -d . -f 2-5 | cut -d / -f 1 | rev
