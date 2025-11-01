#include "Application.h"
#include "imgui/imgui.h"

namespace ClassGame {
        //
        // our global variables
        //

        //
        // game starting point
        // this is called by the main render loop in main.cpp
        //
        void GameStartUp() 
        {
            // Initialize logging system
            //Logger logger = Logger::GetInstance();
            //logger.LogInfo("Game started successfully");
            //logger.LogGameEvent("Application initialized");
        }

        //
        // game render loop
        // this is called by the main render loop in main.cpp
        //
        void RenderGame() 
        {
            ImGui::DockSpaceOverViewport();
            ImGui::ShowDemoWindow();


            // Game Control

            ImGui::Begin("Game Control");
            ImGui::LogButtons();

            if (ImGui::Button("Copy \"RAH!\" to clipboard"))
            {
                ImGui::LogToClipboard();
                ImGui::LogText("RAH!");
                ImGui::LogFinish();
            }

        
            ImGui::End();

            // Game Log

            ImGui::Begin("Game Log");
            ImGui::LogButtons();

            ImGui::End();
        }

        //
        // end turn is called by the game code at the end of each turn
        // this is where we check for a winner
        //
        void EndOfTurn() 
        {
        }
}
