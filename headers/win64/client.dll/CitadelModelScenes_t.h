#pragma once

struct CitadelModelScenes_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlDict< CitadelSceneSettings_t > m_settings; // offset 0x0, size 0x28, align 8
};
