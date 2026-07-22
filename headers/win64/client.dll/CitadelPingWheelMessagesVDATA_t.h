#pragma once

struct CitadelPingWheelMessagesVDATA_t  // sizeof 0x28, align 0x8 (client) {MVDataRoot MVDataSingleton MGetKV3ClassDefaults}
{
    CUtlOrderedMap< ECitadelPingWheelMessageType_t, CUtlVector< CUtlString > > m_mapPingMessages; // offset 0x0, size 0x28, align 8 | MPropertyCustomFGDType
};
