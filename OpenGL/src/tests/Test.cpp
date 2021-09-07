#include "Test.h" 
#include "imgui/imgui.h"

namespace test {

	TestMenu::TestMenu(Test*& m_CurrentTestPointer)
		: m_CurrentTest(m_CurrentTestPointer)
	{
	}
	
	
	void TestMenu::OnImGuiRender()
	{
		for (auto& test : m_Test)
		{
			if (ImGui::Button(test.first.c_str()))
				m_CurrentTest = test.second();
		}
	}
}