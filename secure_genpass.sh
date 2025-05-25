#!/bin/bash
echo "Mot de passe sécurisé (avec caractères spéciaux) :"
tr -dc 'A-Za-z0-9!@#$%&*()_+=' </dev/urandom | head -c 16
echo
