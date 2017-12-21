/**
 * A direction in the plane. As a convenience, directions provide unit vector
 * components (manhattan metric) for both the conventional plane and screen
 * coordinates (y axis reversed).
 * 
 * @author Tom Gibara
 * 
 */

public enum Direction {

	// statics

	E(1, 0), NE(1, 1),

	N(0, 1), NW(-1, 1),

	W(-1, 0), SW(-1, -1),

	S(0, -1), SE(1, -1);

	// fields

	/**
	 * The horizontal distance moved in this direction within the plane.
	 */

	public final int planeX;

	/**
	 * The vertical distance moved in this direction within the plane.
	 */

	public final int planeY;

	/**
	 * The horizontal distance moved in this direction in screen coordinates.
	 */

	public final int screenX;

	/**
	 * The vertical distance moved in this direction in screen coordinates.
	 */

	public final int screenY;

	/**
	 * The euclidean length of this direction's vectors.
	 */

	public final double length;

	// constructor

	private Direction(int x, int y) {
		planeX = x;
		planeY = y;
		screenX = x;
		screenY = -y;
		length = x != 0 && y != 0 ? Math.sqrt(2.0) / 2.0 : 1.0;
	}

}
