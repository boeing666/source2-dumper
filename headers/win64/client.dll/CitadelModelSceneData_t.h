#pragma once

struct CitadelModelSceneData_t  // sizeof 0x28, align 0x8 (client) {MModelGameData MGetKV3ClassDefaults}
{
    CUtlDict< CitadelModelScenes_t > m_scenes; // offset 0x0, size 0x28, align 8
};
