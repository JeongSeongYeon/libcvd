#ifndef CVD_FAST_CORNER_H
#define CVD_FAST_CORNER_H

#include <vector>

#include <cvd/byte.h>
#include <cvd/image.h>
#include <cvd/cpu_hacks.h>

namespace CVD
{
	/// Perform a FAST feature setect on an image. The FAST feature detector
	/// is described in  Fusing Points and Lines for High Performance Tracking,
	/// E. Rosten and T. Drummond, International Conf. on Computer Vision, 2005
	///
	/// Please note, this is preliminary; the interface for corner detectors
	/// has not yet been fixed, due to (at least) the following issues:
	///  - Interface for subpixel detection
	///  - Interface for returning generated data, for later extracting feature vectors
	///  - Allowing multiple container types
	///
	/// @param im 		The input image
	/// @param corners	The resulting container of corner locations
	/// @param barrier	Corner detection threshold
	/// @ingroup	corners
	void fast_corner_detect(const BasicImage<byte>& im, std::vector<ImageRef>& corners, int barrier);
	void fast_nonmax(const BasicImage<byte>& im, const std::vector<ImageRef>& corners, int barrier, std::vector<ImageRef>& nonmax_corners);
	int corner_score(const BasicImage<byte>& im, ImageRef c, const int *pointer_dir, int barrier);
	
	/// Perform tree based 9 point FAST feature detection
	///
	/// @param im 		The input image
	/// @param corners	The resulting container of corner locations
	/// @param barrier	Corner detection threshold
	/// @ingroup	corners
	void fast_corner_detect_9(const BasicImage<byte>& im, std::vector<ImageRef>& corners, int barrier);

	/// Perform tree based 10 point FAST feature detection
	///
	/// @param im 		The input image
	/// @param corners	The resulting container of corner locations
	/// @param barrier	Corner detection threshold
	/// @ingroup	corners
	void fast_corner_detect_10(const BasicImage<byte>& im, std::vector<ImageRef>& corners, int barrier);

	/// Perform tree based 11 point FAST feature detection
	///
	/// @param im 		The input image
	/// @param corners	The resulting container of corner locations
	/// @param barrier	Corner detection threshold
	/// @ingroup	corners
	void fast_corner_detect_11(const BasicImage<byte>& im, std::vector<ImageRef>& corners, int barrier);

	/// Perform tree based 12 point FAST feature detection
	///
	/// @param im 		The input image
	/// @param corners	The resulting container of corner locations
	/// @param barrier	Corner detection threshold
	/// @ingroup	corners
	void fast_corner_detect_12(const BasicImage<byte>& im, std::vector<ImageRef>& corners, int barrier);


}

#endif
