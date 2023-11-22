void del()
    {
        if (head == nullptr || head->right == nullptr)
            return;

        node *temp1 = head;

        while (temp1 != nullptr)
        {
         node *temp2 = temp1->right;
            while (temp2 != nullptr)
            {
                if (temp2->data == temp1->data)
                {
                    temp2->left->right = temp2->right;
                    if (temp2->right != nullptr)
                    {
                        temp2->right->left = temp2->left;
                    }
                }

                temp2 = temp2->right;
            }
            temp1 = temp1->right;
        }
    }