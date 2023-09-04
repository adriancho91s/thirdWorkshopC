#!/bin/bash

for file in /Users/usuario/Desktop/Programming II/Works/thirdWorkshopC/Latex/*; do
    if [ -f "$file" ]; then
        filename=$(basename "$file")
        parts=(${filename//./ })
        if [ ${#parts[@]} -eq 3 ]; then
            number=${parts[0]}
            if [[ $number =~ ^[0-9]+$ ]]; then
                new_filename="${number}.c"
                mv "$file" "/Users/usuario/Desktop/Programming II/Works/thirdWorkshopC/Latex/$new_filename"
                echo "Renombrado $filename a $new_filename"
            fi
        fi
    fi
done
