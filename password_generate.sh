#!/bin/bash
echo "Mot de passe généré :"
tr -dc A-Za-Z0-9 </dev/urandom | head -c 12
echo
