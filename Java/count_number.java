import java.io.File;
import java.util.Scanner;
class Main
{
	public static void main(String[] args)
	{
		int count =0;
		try
		{
			// create a new file object 
			File file = new File("input.txt");
			
			// create an cbject of scanner
			// associated with the file 
			Scanner sc = new Scanner(file);
			
			// read each line and 
			//count number of lines
			while(sc.hasNextLine())
			{
				sc.nextLine();
				count++;
			}
			System.out.println("Total number of Lines:" + count);
			
			// close scanner
			sc.close();
		}
			catch (Exception e)
			{
				e.getStackTrace();
			}
	}
}
			