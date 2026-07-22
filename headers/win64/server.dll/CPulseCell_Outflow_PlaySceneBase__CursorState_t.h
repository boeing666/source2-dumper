#pragma once

struct CPulseCell_Outflow_PlaySceneBase::CursorState_t  // sizeof 0x28, align 0x8 (server) {MGetKV3ClassDefaults}
{
    CHandle< CBaseEntity > m_sceneInstance; // offset 0x0, size 0x4, align 4
    CHandle< CBaseEntity > m_mainActor; // offset 0x4, size 0x4, align 4
    CUtlHashtable< int32, CUtlString > m_cursorIDToPort; // offset 0x8, size 0x20, align 8
};
