#pragma once

class CTier1Application;

namespace boot {

// VApplication001 for systems that query it during Connect/Init. Every method answers with a neutral
// default; only GetGameInfo returns an object (SceneSystem_002::Init reads it unconditionally).
[[nodiscard]] CTier1Application* StubApplication();

}
