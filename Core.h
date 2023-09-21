#pragma once

namespace Catreal {

    class Core {
    public:
        Core(int width, int height, const char* title);
        ~Core();

        void Run();

    private:
        int screenWidth;
        int screenHeight;
        const char* windowTitle;

        // Initialize game-related resources
        void Initialize();

        // Load and render 3D models (simplified)
        void LoadModels();
        void RenderModels();

        // Main game loop
        void GameLoop();

        // Handle user input
        void ProcessInput();

        // Cleanup resources
        void Cleanup();

        // Other necessary private members and functions

    };

} // namespace Catreal
