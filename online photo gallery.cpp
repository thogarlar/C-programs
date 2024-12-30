#include <iostream>
#include <vector>
#include <string>

// Photo structure
struct Photo {
    std::string name;
    std::string description;
    std::string filePath;
};

// Online Photo Gallery class
class OnlinePhotoGallery {
private:
    std::vector<Photo> photos;

public:
    // Function to add a new photo to the gallery
    void addPhoto(const std::string& name, const std::string& description, const std::string& filePath) {
        Photo newPhoto;
        newPhoto.name = name;
        newPhoto.description = description;
        newPhoto.filePath = filePath;
        photos.push_back(newPhoto);

        std::cout << "Photo added successfully.\n";
    }

    // Function to display all photos in the gallery
    void displayPhotos() const {
        if (photos.empty()) {
            std::cout << "No photos found in the gallery.\n";
        } else {
            std::cout << "Gallery Photos:\n";
            for (const auto& photo : photos) {
                std::cout << "Name: " << photo.name << "\n";
                std::cout << "Description: " << photo.description << "\n";
                std::cout << "File Path: " << photo.filePath << "\n\n";
            }
        }
    }
};

int main() {
    OnlinePhotoGallery photoGallery;

    // Example usage of the Online Photo Gallery
    photoGallery.addPhoto("Sunset", "Beautiful sunset over the ocean", "Sunset.jpg");
    photoGallery.addPhoto("Mountains", "mountains are covered with snow", "Mountain.jpg");

    photoGallery.displayPhotos();

    return 0;
}
