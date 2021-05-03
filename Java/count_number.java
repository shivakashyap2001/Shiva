import java.io.File;
import java.util.scanner;
class Main
{
	public static void main(string[] args)
	{
		int count =0;
		try
		{
			// create a new file object 
			File file = new File("input.txt");
			
			// create an cbject of scanner
			// associated with the file 
			scanner sc = new scanner(file);
			
			// read each line and 
			//count number of lines
			while(sc.hasNextLine())
			{
				sc.nectLine();
				count++;
			}
			System.out.Println("Total number of Lines:" + count);
			
			// close scanner
			sc.close();
		}
			catch (Exception e)
			{
				e.getStackTrace();
			}
	}
}
			