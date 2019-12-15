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

	////WALL13
	Cube wall13(65, 30.5, 2);
	wall13.SetPos(-105, 1, 110);
	App->physics->AddBody(wall13, 100000);
	wall13.wire = true;
	wall13.color.Set(1.0f, 1.0f, 1.0f);
	wall13.axis = true;

	//WALL14
	Cube wall14(2, 30.5, 100);
	wall14.SetPos(-140, 1, 160);
	App->physics->AddBody(wall14, 100000);
	wall14.wire = true;
	wall14.color.Set(1.0f, 1.0f, 1.0f);
	wall14.axis = true;

	//WALL15
	Cube wall15(70, 30.5, 2);
	wall15.SetPos(-105, 1, 210);
	App->physics->AddBody(wall15, 100000);
	wall15.wire = true;
	wall15.color.Set(1.0f, 1.0f, 1.0f);
	wall15.axis = true;

	//WALL16
	Cube wall16(2, 30.5, 40);
	wall16.SetPos(-105, 1, 160);
	App->physics->AddBody(wall16, 100000);
	wall16.wire = true;
	wall16.color.Set(1.0f, 1.0f, 1.0f);
	wall16.axis = true;

	//WALL17
	Cube wall17(2, 30.5, 70);
	wall17.SetPos(-70, 1, 175);
	App->physics->AddBody(wall17, 100000);
	wall17.wire = true;
	wall17.color.Set(1.0f, 1.0f, 1.0f);
	wall17.axis = true;



	//WALL 18
	Cube wall18(2, 30.5, 130);
	wall18.SetPos(-105, 1, 45);
	App->physics->AddBody(wall18, 100000);
	wall18.wire = true;
	wall18.color.Set(1.0f, 1.0f, 1.0f);
	wall18.axis = true;


	//WALL19
	Cube wall19(115, 30.5, 2);
	wall19.SetPos(-48, 1, -20);
	App->physics->AddBody(wall19, 100000);
	wall19.wire = true;
	wall19.color.Set(1.0f, 1.0f, 1.0f);
	wall19.axis = true;

	//WALL20
	Cube wall20(3, 30.5, 28);
	wall20.SetPos(-10, 1, -5);
	App->physics->AddBody(wall20, 100000);
	wall20.color.Set(1.0f, 1.0f, 1.0f);

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
	wall9.color = Green;
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
	wall12.color = Green;
	wall12.Render();

	//WALL13
	Cube wall13(65, 30.5, 2);
	wall13.SetPos(-105, 15, 111);
	wall13.color = Green;
	wall13.Render();

	//WALL14
	Cube wall14(2, 30.5, 100);
	wall14.SetPos(-140.5, 15, 160);
	wall14.color = Blue;
	wall14.Render();

	//WALL15
	Cube wall15(70, 30.5, 2);
	wall15.SetPos(-105, 15, 210);
	wall15.color = Blue;
	wall15.Render();

	//WALL16
	Cube wall16(2, 30.5, 40);
	wall16.SetPos(-105, 15, 160);
	wall16.color = Blue;
	wall16.Render();

	//WALL17
	Cube wall17(2, 30.5, 70);
	wall17.SetPos(-68.5, 15, 175);
	wall17.color = Blue;
	wall17.Render();


	//WALL 18
	Cube wall18(2, 30.5, 130);
	wall18.SetPos(-105.5, 15, 45);
	wall18.color = Blue;
	wall18.Render();

	////WALL19
	Cube wall19(115, 30.5, 2);
	wall19.SetPos(-48, 15, -20);
	wall19.color = Blue;
	wall19.Render();

	//WALL20
	Cube wall20(3, 30.5, 28);
	wall20.SetPos(-10, 15, -5);
	wall20.color = Red;
	wall20.Render();

	

	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}

