#include "StdInc.h"

char (&CGridRef::GridRefList)[3200] = *reinterpret_cast<char (*)[3200]>(0xC72FB0);

void CGridRef::InjectHooks() {
//    ReversibleHooks::Install("CGridRef", "Init", 0x71D4E0, &CGridRef::Init);
}

// 0x71D4E0
void CGridRef::Init() {
    plugin::Call<0x71D4E0>();
}

// unused
// 0x71D670
void CGridRef::GetAreaName(unsigned char a1, unsigned char a2) {

}

// unused
void CGridRef::GetArtistBugstarID(unsigned char a1, unsigned char a2) {

}

// unused
// 0x71D5A0
void CGridRef::GetGridRefPositions(CVector a1, unsigned char* a2, unsigned char* a3) {

}

// unused
// 0x71D5E0
void CGridRef::GetGridRefPositions(unsigned char* a1, unsigned char* a2) {

}
