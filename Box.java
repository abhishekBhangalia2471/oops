public class Box {
	int width; int height; int length;
	Box(int length,int width, int height){
		this.length = length;
 		this.width = width;
		this.height = height;
	}

	Box(Box b){
		this.length = b.length;
		this.width = b.width;
		this.height = b.height;
	}

	int volume(){
		return length * width * height;
	}

	public static void main(String[] args){
		Box b1 = new Box(10,20,30);
		Box b2 = new Box(b1);
		System.out.println("Volume of box is : "+b2.volume());
	}
}

