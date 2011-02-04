/* vala-dmap-container-db.c generated by valac 0.11.4, the Vala compiler
 * generated from vala-dmap-container-db.vala, do not modify */

/*   FILE: vala-dmap-db.vala -- A DMAPContainerDb implementation in Vala
 * AUTHOR: W. Michael Petullo <mike@flyn.org>
 *   DATE: 21 December 2010 
 *
 * Copyright (c) 2010 W. Michael Petullo <new@flyn.org>
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

#include <glib.h>
#include <glib-object.h>
#include <libdmapsharing/dmap.h>
#include <gee.h>


#define TYPE_VALA_DMAP_CONTAINER_DB (vala_dmap_container_db_get_type ())
#define VALA_DMAP_CONTAINER_DB(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VALA_DMAP_CONTAINER_DB, ValaDMAPContainerDb))
#define VALA_DMAP_CONTAINER_DB_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VALA_DMAP_CONTAINER_DB, ValaDMAPContainerDbClass))
#define IS_VALA_DMAP_CONTAINER_DB(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VALA_DMAP_CONTAINER_DB))
#define IS_VALA_DMAP_CONTAINER_DB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VALA_DMAP_CONTAINER_DB))
#define VALA_DMAP_CONTAINER_DB_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VALA_DMAP_CONTAINER_DB, ValaDMAPContainerDbClass))

typedef struct _ValaDMAPContainerDb ValaDMAPContainerDb;
typedef struct _ValaDMAPContainerDbClass ValaDMAPContainerDbClass;
typedef struct _ValaDMAPContainerDbPrivate ValaDMAPContainerDbPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ValaDMAPContainerDb {
	GObject parent_instance;
	ValaDMAPContainerDbPrivate * priv;
};

struct _ValaDMAPContainerDbClass {
	GObjectClass parent_class;
};

struct _ValaDMAPContainerDbPrivate {
	GeeArrayList* db;
};


static gpointer vala_dmap_container_db_parent_class = NULL;
static DMAPContainerDbIface* vala_dmap_container_db_dmap_container_db_parent_iface = NULL;

GType vala_dmap_container_db_get_type (void) G_GNUC_CONST;
#define VALA_DMAP_CONTAINER_DB_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_VALA_DMAP_CONTAINER_DB, ValaDMAPContainerDbPrivate))
enum  {
	VALA_DMAP_CONTAINER_DB_DUMMY_PROPERTY
};
static gint64 vala_dmap_container_db_real_count (DMAPContainerDb* base);
static void vala_dmap_container_db_real_foreach (DMAPContainerDb* base, GHFunc func, void* func_target);
static DMAPContainerRecord* vala_dmap_container_db_real_lookup_by_id (DMAPContainerDb* base, guint id);
ValaDMAPContainerDb* vala_dmap_container_db_new (void);
ValaDMAPContainerDb* vala_dmap_container_db_construct (GType object_type);
static void vala_dmap_container_db_finalize (GObject* obj);


static gint64 vala_dmap_container_db_real_count (DMAPContainerDb* base) {
	ValaDMAPContainerDb * self;
	gint64 result = 0LL;
	gint _tmp0_;
	self = (ValaDMAPContainerDb*) base;
	_tmp0_ = gee_collection_get_size ((GeeCollection*) self->priv->db);
	result = (gint64) _tmp0_;
	return result;
}


static void vala_dmap_container_db_real_foreach (DMAPContainerDb* base, GHFunc func, void* func_target) {
	ValaDMAPContainerDb * self;
	gint i = 0;
	self = (ValaDMAPContainerDb*) base;
	{
		gboolean _tmp0_;
		i = 0;
		_tmp0_ = TRUE;
		while (TRUE) {
			gint _tmp1_;
			void* _tmp2_ = NULL;
			gpointer _tmp3_ = NULL;
			if (!_tmp0_) {
				i++;
			}
			_tmp0_ = FALSE;
			_tmp1_ = gee_collection_get_size ((GeeCollection*) self->priv->db);
			if (!(i < _tmp1_)) {
				break;
			}
			_tmp2_ = GINT_TO_POINTER (i);
			_tmp3_ = gee_abstract_list_get ((GeeAbstractList*) self->priv->db, i);
			func (_tmp2_, (DMAPRecord*) _tmp3_, func_target);
		}
	}
}


static DMAPContainerRecord* vala_dmap_container_db_real_lookup_by_id (DMAPContainerDb* base, guint id) {
	ValaDMAPContainerDb * self;
	DMAPContainerRecord* result = NULL;
	self = (ValaDMAPContainerDb*) base;
	g_error ("vala-dmap-container-db.vala:41: lookup_by_id not implemented");
	return result;
}


ValaDMAPContainerDb* vala_dmap_container_db_construct (GType object_type) {
	ValaDMAPContainerDb * self = NULL;
	self = (ValaDMAPContainerDb*) g_object_new (object_type, NULL);
	return self;
}


ValaDMAPContainerDb* vala_dmap_container_db_new (void) {
	return vala_dmap_container_db_construct (TYPE_VALA_DMAP_CONTAINER_DB);
}


static void vala_dmap_container_db_class_init (ValaDMAPContainerDbClass * klass) {
	vala_dmap_container_db_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ValaDMAPContainerDbPrivate));
	G_OBJECT_CLASS (klass)->finalize = vala_dmap_container_db_finalize;
}


static void vala_dmap_container_db_dmap_container_db_interface_init (DMAPContainerDbIface * iface) {
	vala_dmap_container_db_dmap_container_db_parent_iface = g_type_interface_peek_parent (iface);
	iface->count = (gint64 (*)(DMAPContainerDb*)) vala_dmap_container_db_real_count;
	iface->foreach = (void (*)(DMAPContainerDb* ,GHFunc ,void*)) vala_dmap_container_db_real_foreach;
	iface->lookup_by_id = (DMAPContainerRecord* (*)(DMAPContainerDb* ,guint)) vala_dmap_container_db_real_lookup_by_id;
}


static void vala_dmap_container_db_instance_init (ValaDMAPContainerDb * self) {
	GeeArrayList* _tmp0_ = NULL;
	self->priv = VALA_DMAP_CONTAINER_DB_GET_PRIVATE (self);
	_tmp0_ = gee_array_list_new (DMAP_TYPE_RECORD, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	self->priv->db = _tmp0_;
}


static void vala_dmap_container_db_finalize (GObject* obj) {
	ValaDMAPContainerDb * self;
	self = VALA_DMAP_CONTAINER_DB (obj);
	_g_object_unref0 (self->priv->db);
	G_OBJECT_CLASS (vala_dmap_container_db_parent_class)->finalize (obj);
}


GType vala_dmap_container_db_get_type (void) {
	static volatile gsize vala_dmap_container_db_type_id__volatile = 0;
	if (g_once_init_enter (&vala_dmap_container_db_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDMAPContainerDbClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_dmap_container_db_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDMAPContainerDb), 0, (GInstanceInitFunc) vala_dmap_container_db_instance_init, NULL };
		static const GInterfaceInfo dmap_container_db_info = { (GInterfaceInitFunc) vala_dmap_container_db_dmap_container_db_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_dmap_container_db_type_id;
		vala_dmap_container_db_type_id = g_type_register_static (G_TYPE_OBJECT, "ValaDMAPContainerDb", &g_define_type_info, 0);
		g_type_add_interface_static (vala_dmap_container_db_type_id, DMAP_TYPE_CONTAINER_DB, &dmap_container_db_info);
		g_once_init_leave (&vala_dmap_container_db_type_id__volatile, vala_dmap_container_db_type_id);
	}
	return vala_dmap_container_db_type_id__volatile;
}


