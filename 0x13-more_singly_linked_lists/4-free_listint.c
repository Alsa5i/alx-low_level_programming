void free_listint(listint_t *head)
{
	listint_t *Tis_nod;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(Tis_nod);
	}
}
