/*   FILE: dacplisten.vala -- Listen to DACP remotes
 * AUTHOR: W. Michael Petullo <mike@flyn.org>
 *   DATE: 06 January 2011 
 *
 * Copyright (c) 2011 W. Michael Petullo <new@flyn.org>
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

private class ValaDACPPlayer : DACP.Player {

	unowned DAAP.Record now_playing_record () {
		stdout.printf ("Now playing record request received");
		return null;
	}

	/* FIXME: This should return uint8[], modify dacp-player.h? */
	unowned string now_playing_artwork (uint width, uint heigth) {
		stdout.printf ("Now playing artwork request received");
		return null;
	}

	void play_pause () {
		stdout.printf ("Play/pause request received");
	}

	void pause () {
		stdout.printf ("Pause request received");
	}

	void next_item () {
		stdout.printf ("Next item request received");
	}

	void prev_item () {
		stdout.printf ("Previous item request received");
	}

	void cue_clear () {
		stdout.printf ("Cue clear request received");
	}

	void cue_play (GLib.List records, uint index) {
		stdout.printf ("Cue play request received");
	}
}

private class DACPListener {
}

int main (string[] args) {     
	var loop = new GLib.MainLoop ();

	var dacplistener = new DACPListener ();

	loop.run ();

	return 0;
}