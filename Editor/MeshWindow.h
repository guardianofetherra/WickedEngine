#pragma once

class wiGUI;
class wiWindow;
class wiLabel;
class wiCheckBox;
class wiSlider;
class wiButton;
class wiComboBox;

class EditorComponent;

class MeshWindow
{
public:
	MeshWindow(EditorComponent* editor);
	~MeshWindow();

	wiGUI* GUI;

	wiECS::Entity entity;
	void SetEntity(wiECS::Entity entity);

	wiWindow*	meshWindow;
	wiLabel*	meshInfoLabel;
	wiCheckBox* doubleSidedCheckBox;
	wiCheckBox* softbodyCheckBox;
	wiSlider*	massSlider;
	wiSlider*	frictionSlider;
	wiButton*	impostorCreateButton;
	wiSlider*	impostorDistanceSlider;
	wiSlider*	tessellationFactorSlider;
	wiButton*	flipCullingButton;
	wiButton*	flipNormalsButton;
	wiButton*	computeNormalsSmoothButton;
	wiButton*	computeNormalsHardButton;
	wiButton*	recenterButton;
	wiButton*	recenterToBottomButton;

	wiCheckBox* terrainCheckBox;
	wiComboBox* terrainMat1Combo;
	wiComboBox* terrainMat2Combo;
	wiComboBox* terrainMat3Combo;
	wiButton* terrainGenButton;

	wiWindow* terrainGenWindow = nullptr;

	// heightmap texture:
	unsigned char* rgb = nullptr;
	const int channelCount = 4;
	int width = 0, height = 0;
};

