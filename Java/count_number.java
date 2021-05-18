import java.io.File;
<<<<<<< HEAD
import java.util.Scanner;
class Main
{
	public static void main(String[] args)
=======
import java.util.scanner;
class Main
{
	public static void main(string[] args)
>>>>>>> 1ba3b01f0a3bc54c24570e5f903a2b94c402c8ef
	{
		int count =0;
		try
		{
			// create a new file object 
			File file = new File("input.txt");
			
			// create an cbject of scanner
			// associated with the file 
<<<<<<< HEAD
			Scanner sc = new Scanner(file);
=======
			scanner sc = new scanner(file);
>>>>>>> 1ba3b01f0a3bc54c24570e5f903a2b94c402c8ef
			
			// read each line and 
			//count number of lines
			while(sc.hasNextLine())
			{
<<<<<<< HEAD
				sc.nextLine();
				count++;
			}
			System.out.println("Total number of Lines:" + count);
=======
				sc.nectLine();
				count++;
			}
			System.out.Println("Total number of Lines:" + count);
>>>>>>> 1ba3b01f0a3bc54c24570e5f903a2b94c402c8ef
			
			// close scanner
			sc.close();
		}
			catch (Exception e)
			{
				e.getStackTrace();
			}
	}
}
			