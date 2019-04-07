struct space_packet* PacketAssembly(string octet)
{
	struct space_packet *temp = malloc(sizeof(space_packet))
	for()// loop over octet string and assign values to temp variables
	{
            ...
            ...
	}
	//or other way is by using offset to string octet and subsequent variables
	
	//some function for error correction
	temp->Checksum = CalculateChecksum(octet);

	return temp;


}