#pragma once

struct CNavLinkAreaEntity::NpcUserList_t  // sizeof 0x18, align 0x8 (server) {MGetKV3ClassDefaults}
{
    CUtlVector< CHandle< CAI_BaseNPC > > m_vecUsers; // offset 0x0, size 0x18, align 8
};
