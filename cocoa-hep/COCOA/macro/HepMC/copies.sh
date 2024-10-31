# Define the original file and the path if necessary
original_file="hepmc_Zjets_10.in"
old_text="_Seed10"

# Loop to create 50 copies
for i in {11..59}; do
	new_file="hepmc_Zjets_$i.in"
	new_word="_Seed$i"
    cp "$original_file" "$new_file"
    sed -i "s/\b$old_text\b/$new_word/g" "$new_file"
done
