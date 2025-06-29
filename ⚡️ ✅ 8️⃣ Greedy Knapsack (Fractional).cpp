double fractionalKnapsack(double capacity, vector<Item>& items) {
    // Step 1: Sort items by value/weight ratio in descending order
    sort(items.begin(), items.end(), compare);

    double totalValue = 0.0; // মোট যেই value আমরা নিইতেছি
    double currentWeight = 0.0; // এখন পর্যন্ত নেয়া মোট ওজন

    // Step 2: Loop through sorted items
    for (int i = 0; i < items.size(); i++) {
        // যদি সম্পূর্ণ item এর ওজন ব্যাগে ঢুকানো যায়
        if (currentWeight + items[i].weight <= capacity) {
            currentWeight += items[i].weight;     // ওজন যোগ করলাম
            totalValue += items[i].value;         // value যোগ করলাম
        } 
        else {
            // Step 3: যদি পুরা item না নেয়া যায়, তাহলে ভাগ করে নিই
            double remain = capacity - currentWeight; // কতটুকু ওজন বাকী আছে
            totalValue += (items[i].value / items[i].weight) * remain; // আনুপাতিক value নিই
            break; // ব্যাগ পূর্ণ হয়ে গেছে
        }
    }

    return totalValue; // সর্বোচ্চ value যা ব্যাগে নেয়া যায়
}