#pragma once

struct NPCAttachmentDesc_t  // sizeof 0x120, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_sAttachmentName; // offset 0x0, size 0x8, align 8
    CUtlString m_sEntityName; // offset 0x8, size 0x8, align 8
    Vector m_vOffset; // offset 0x10, size 0xC, align 4
    QAngle m_aAngOffset; // offset 0x1C, size 0xC, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0x28, size 0xE0, align 8
    CUtlVector< NPCAttachmentSpawnKV_t > m_vecSpawnKV; // offset 0x108, size 0x18, align 8
};
