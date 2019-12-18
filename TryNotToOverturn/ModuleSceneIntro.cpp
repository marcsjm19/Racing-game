#include "Globals.h"
#include "Application.h"
#include "ModuleSceneIntro.h"
#include "Primitive.h"
#include "PhysBody3D.h"

ModuleSceneIntro::ModuleSceneIntro(Application* app, bool start_enabled) : Module(app, start_enabled)
{
}

ModuleSceneIntro::~ModuleSceneIntro()
{}

// Load assets
bool ModuleSceneIntro::Start()
{
	LOG("Loading Intro assets");
	bool ret = true;

	App->camera->Move(vec3(1.0f, 1.0f, 0.0f));
	App->camera->LookAt(vec3(0, 0, 0));

	//WALL1
	Cube wall1(2, 30.5, 70);
	wall1.SetPos(10, 1, 15);
	App->physics->AddBody(wall1, 100000);
	wall1.color.Set(1.0f, 1.0f, 1.0f);

	//WALL2
	Cube wall2(2, 30.5, 100);
	wall2.SetPos(-10, 1, 60);
	App->physics->AddBody(wall2, 100000);
	wall2.wire = true;
	wall2.color.Set(1.0f, 1.0f, 1.0f);
	wall2.axis = true;

	//WALL3
	Cube wall3(50, 30.5, 2);
	wall3.SetPos(35, 1, 50);
	App->physics->AddBody(wall3, 100000);
	wall3.wire = true;
	wall3.color.Set(1.0f, 1.0f, 1.0f);
	wall3.axis = true;

	//WALL4
	Cube wall4(50, 30.5, 2);
	wall4.SetPos(15, 1, 70);
	App->physics->AddBody(wall4, 100000);
	wall4.wire = true;
	wall4.color.Set(1.0f, 1.0f, 1.0f);
	wall4.axis = true;

	//WALL5
	Cube wall5(2, 30.5, 90);
	wall5.SetPos(60, 1, 95);
	App->physics->AddBody(wall5, 100000);
	wall5.wire = true;
	wall5.color.Set(1.0f, 1.0f, 1.0f);
	wall5.axis = true;

	//WALL6
	Cube wall6(50, 30.5, 2);
	wall6.SetPos(35, 1, 90);
	App->physics->AddBody(wall6, 100000);
	wall6.wire = true;
	wall6.color.Set(1.0f, 1.0f, 1.0f);
	wall6.axis = true;

	//WALL7
	Cube wall7(50, 30.5, 2);
	wall7.SetPos(15, 1, 110);
	App->physics->AddBody(wall7, 100000);
	wall7.wire = true;
	wall7.color.Set(1.0f, 1.0f, 1.0f);
	wall7.axis = true;

	//WALL8
	Cube wall8(100, 30.5, 2);
	wall8.SetPos(10, 1, 138);
	App->physics->AddBody(wall8, 100000);
	wall8.wire = true;
	wall8.color.Set(1.0f, 1.0f, 1.0f);
	wall8.axis = true;

	//WALL9
	Cube wall9(2, 30.5, 100);
	wall9.SetPos(-40, 1, 90);
	App->physics->AddBody(wall9, 100000);
	wall9.wire = true;
	wall9.color.Set(1.0f, 1.0f, 1.0f);
	wall9.axis = true;

	//WALL10
	Cube wall10(60, 30.5, 2);
	wall10.SetPos(-40, 1, 10);
	App->physics->AddBody(wall10, 100000);
	wall10.wire = true;
	wall10.color.Set(1.0f, 1.0f, 1.0f);
	wall10.axis = true;

	//WALL11
	Cube wall11(2, 30.5, 100);
	wall11.SetPos(-70, 1, 60);
	App->physics->AddBody(wall11, 100000);
	wall11.wire = true;
	wall11.color.Set(1.0f, 1.0f, 1.0f);
	wall11.axis = true;

	//WALL12
	Cube wall12(65, 30.5, 2);
	wall12.SetPos(-72, 1, 138);
	App->physics->AddBody(wall12, 100000);
	wall12.wire = true;
	wall12.color.Set(1.0f, 1.0f, 1.0f);
	wall12.axis = true;	

	//WALL 13
	Cube wall13(2, 30.5, 160);
	wall13.SetPos(-105, 1, 60);
	App->physics->AddBody(wall13, 100000);
	wall13.wire = true;
	wall13.color.Set(1.0f, 1.0f, 1.0f);
	wall13.axis = true;


	//WALL14
	Cube wall14(120, 30.5, 2);
	wall14.SetPos(-48, 1, -20);
	App->physics->AddBody(wall14, 100000);
	wall14.wire = true;
	wall14.color.Set(1.0f, 1.0f, 1.0f);
	wall14.axis = true;


	////OBSTACLE1
	Cube Obstacle1(30, 2, 5);
	Obstacle1.SetPos(-90, 0, 90);
	Obstacle1.SetRotation(20, vec3(-1, 0, 0));
	App->physics->AddBody(Obstacle1, 0);

	////OBSTACLE2
	Cube Obstacle2(30, 2, 5);
	Obstacle2.SetPos(-90, 0, 60);
	Obstacle2.SetRotation(20, vec3(-1, 0, 0));
	App->physics->AddBody(Obstacle2, 0);

	////OBSTACLE3
	Cube Obstacle3(30, 2, 5);
	Obstacle3.SetPos(-90, 0, 30);
	Obstacle3.SetRotation(20, vec3(-1, 0, 0));
	App->physics->AddBody(Obstacle3, 0);


	return ret;
}

// Load assets
bool ModuleSceneIntro::CleanUp()
{
	LOG("Unloading Intro scene");

	return true;
}

// Update
update_status ModuleSceneIntro::Update(float dt)
{
	Plane p(0, 1, 0, 0);
	p.axis = true;
	p.Render();

	//WALL1
	Cube wall1(2, 30.5, 70);
	wall1.SetPos(10, 15, 15);
	wall1.color = Blue;
	wall1.Render();

	//WALL2
	Cube wall2(2, 30.5, 100);
	wall2.SetPos(-10, 15, 60);
	wall2.color = Blue;
	wall2.Render();

	//WALL3
	Cube wall3(50, 30.5, 2);
	wall3.SetPos(35, 15, 50);
	wall3.color = Blue;
	wall3.Render();

	//WALL4
	Cube wall4(50, 30.5, 2);
	wall4.SetPos(15, 15, 70);
	wall4.color = Blue;
	wall4.Render();

	//WALL5
	Cube wall5(2, 30.5, 90);
	wall5.SetPos(61, 15, 95);
	wall5.color = Blue;
	wall5.Render();

	//WALL6
	Cube wall6(50, 30.5, 2);
	wall6.SetPos(35, 15, 90);
	wall6.color = Blue;
	wall6.Render();

	//WALL7
	Cube wall7(50, 30.5, 2);
	wall7.SetPos(15, 15, 110);
	wall7.color = Blue;
	wall7.Render();

	//WALL8
	Cube wall8(100, 30.5, 2);
	wall8.SetPos(10, 15, 138);
	wall8.color = Blue;
	wall8.Render();

	//WALL9
	Cube wall9(2, 30.5, 100);
	wall9.SetPos(-40, 15, 90);
	wall9.color = Blue;
	wall9.Render();

	//WALL10
	Cube wall10(60, 30.5, 2);
	wall10.SetPos(-40, 15, 10);
	wall10.color = Blue;
	wall10.Render();

	//WALL11
	Cube wall11(2, 30.5, 100);
	wall11.SetPos(-69, 15, 60);
	wall11.color = Blue;
	wall11.Render();

	//WALL12
	Cube wall12(65, 30.5, 2);
	wall12.SetPos(-72, 15, 138);
	wall12.color = Blue;
	wall12.Render();

	//WALL13
	Cube wall13(2, 30.5, 160);
	wall13.SetPos(-108.5, 15, 60);
	wall13.color = Blue;
	wall13.Render();

	////WALL14
	Cube wall14(120, 30.5, 2);
	wall14.SetPos(-48, 15, -20);
	wall14.color = Blue;
	wall14.Render();

	//FINISH LINE
	Cube finishline(1, 1, 28);
	finishline.SetPos(-10, 5, -5);
	finishline.color = Red;
	finishline.Render();

	////OBSTACLE1
	Cube Obstacle1(30, 2, 5);
	Obstacle1.SetPos(-90, 0, 90);
	Obstacle1.SetRotation(20, vec3(-1, 0, 0));
	Obstacle1.color = Pink;
	Obstacle1.Render();

	////OBSTACLE2
	Cube Obstacle2(30, 2, 5);
	Obstacle2.SetPos(-90, 0, 60);
	Obstacle2.SetRotation(20, vec3(-1, 0, 0));
	Obstacle2.color = Pink;
	Obstacle2.Render();

	////OBSTACLE3
	Cube Obstacle3(30, 2, 5);
	Obstacle3.SetPos(-90, 0, 30);
	Obstacle3.SetRotation(20, vec3(-1, 0, 0));
	Obstacle3.color = Pink;
	Obstacle3.Render();

	

	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}

