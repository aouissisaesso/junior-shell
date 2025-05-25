#!/bin/bash
echo "Mot de passe complexe (32 caratères avec tout) :"
tr -dc 'A-Za-z0-9!@#$%^&*()_+=-[]{}|:;,.<>?/~`' </dev/urandom | head -c 32
echo
